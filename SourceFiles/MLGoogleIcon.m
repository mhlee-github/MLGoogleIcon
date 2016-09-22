//
//  MLGoogleIcon.m
//  MLGoogleIcon
//
//  Created by mhlee on 2016. 9. 22..
//  Copyright © 2016년 mhlee. All rights reserved.
//

#import "MLGoogleIcon.h"
#import <CoreText/CoreText.h> // CoreText.framework

@implementation MLGoogleIcon

+ (UIFont *)fontOfSize:(CGFloat)size {
    return [UIFont fontWithName:@"googleicon" size:size];
}

+ (NSString *)iconString:(MLGoogleIconName)iconName {
    return [NSString stringWithFormat:@"%C", (unichar)iconName];
}

+ (UIImage *)iconImage:(MLGoogleIconName)iconName imageSize:(CGSize)imageSize iconSize:(CGFloat)iconSize foregroundColor:(UIColor *)foregroundColor {
    NSString *iconString = [MLGoogleIcon iconString:iconName];
    UIFont *font = [MLGoogleIcon fontOfSize:iconSize];
    
    NSMutableAttributedString *attrString = [[NSMutableAttributedString alloc]initWithString:iconString];
    [attrString addAttribute:NSFontAttributeName value:font range:NSMakeRange(0, [iconString length])];
    [attrString addAttribute:NSForegroundColorAttributeName value:foregroundColor range:NSMakeRange(0, [iconString length])];
    
    UIGraphicsBeginImageContextWithOptions(imageSize, NO, 0);
    CGContextRef ctx = UIGraphicsGetCurrentContext();
    CGContextSaveGState(ctx);
  
    CFAttributedStringRef attrStringRef = (__bridge CFAttributedStringRef)attrString;
    CTLineRef line = CTLineCreateWithAttributedString(attrStringRef);

    // Set text position and draw the line into the graphics context
    CGFloat centerX = (imageSize.width - iconSize) / 2;
    CGFloat centerY = (imageSize.height - iconSize) / 2;
    CGContextSetTextPosition(ctx, centerX, centerY);
    
    CGContextTranslateCTM(ctx, 0, imageSize.height);
    CGContextScaleCTM(ctx, 1.0f, -1.0f);
    
    CTLineDraw(line, ctx);
    CFRelease(line);
    
    CGContextRestoreGState(ctx);
    UIImage *image = UIGraphicsGetImageFromCurrentImageContext();
    UIGraphicsEndImageContext();

    return image;
}

@end
