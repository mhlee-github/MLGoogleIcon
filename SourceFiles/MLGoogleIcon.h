//
//  MLGoogleIcon.h
//  MLGoogleIcon
//
//  Created by mhlee on 2016. 9. 22..
//  Copyright © 2016년 mhlee. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

// refer to googleicon.html

typedef NS_ENUM(NSUInteger, MLGoogleIconName) {
    MLGoogleIconDelete                = 0xe643,
    MLGoogleIconDescription           = 0xe645,
    MLGoogleIconDone                  = 0xe649,
    MLGoogleIconDoneAll               = 0xe64b,
    MLGoogleIconHome                  = 0xe670,
    MLGoogleIconFastForward           = 0xe758,
    MLGoogleIconFastRewind            = 0xe75a,
    MLGoogleIconPause                 = 0xe776,
    MLGoogleIconVideocam              = 0xe7a4,
    MLGoogleIconPlayArrow             = 0xe77c,
    MLGoogleIconPlaylistAdd           = 0xe784,
    MLGoogleIconQueueMusic            = 0xe788,
    MLGoogleIconRepeat                = 0xe78e,
    MLGoogleIconRepeatOne             = 0xe790,
    MLGoogleIconReplay                = 0xe792,
    MLGoogleIconShuffle               = 0xe794,
    MLGoogleIconVolumeMute            = 0xe7ac,
    MLGoogleIconVolumeUp              = 0xe7b1,
    MLGoogleIconClearAll              = 0xe7c7,
    MLGoogleIconAdd                   = 0xe803,
    MLGoogleIconArchive               = 0xe80b,
    MLGoogleIconSelectAll             = 0xe83d,
    MLGoogleIconSend                  = 0xe83f,
    MLGoogleIconSort                  = 0xe841,
    MLGoogleIconStorage               = 0xe907,
    MLGoogleIconInsertDriveFile       = 0xe986,
    MLGoogleIconInsertPhoto           = 0xe992,
    MLGoogleIconFileDownload          = 0xe9be,
    MLGoogleIconKeyboardArrowLeft     = 0xe9e3,
    MLGoogleIconKeyboardArrowRight    = 0xe9e5,
    MLGoogleIconLaptopMac             = 0xe9fb,
    MLGoogleIconLaptopWindows         = 0xe9fd,
    MLGoogleIconPhoneAndroid          = 0xea03,
    MLGoogleIconPhoneIPhone           = 0xea05,
    MLGoogleIconTabletAndroid         = 0xea15,
    MLGoogleIconTabletMac             = 0xea17,
    MLGoogleIconAudiotrack            = 0xea23,
    MLGoogleIconImage                 = 0xeac1,
    MLGoogleIconCheckBox              = 0xeb2f,
    MLGoogleIconCheckBoxOutlineBlank  = 0xeb31,
    MLGoogleIconArrowBack             = 0xebae,
    MLGoogleIconCancel                = 0xebc0,
    MLGoogleIconClose                 = 0xebd0,
    MLGoogleIconRefresh               = 0xebf0,
    MLGoogleIconMoreHoriz             = 0xebe8,
    MLGoogleIconMoreVert              = 0xebec,
    MLGoogleIconPeople                = 0xec63,
};

@interface MLGoogleIcon : NSObject

+ (UIFont *)fontOfSize:(CGFloat)size;
+ (NSString *)iconString:(MLGoogleIconName)iconName;

+ (UIImage *)iconImage:(MLGoogleIconName)iconName imageSize:(CGSize)imageSize iconSize:(CGFloat)iconSize foregroundColor:(UIColor *)foregroundColor;

@end
