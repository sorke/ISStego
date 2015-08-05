//
//  ISTestUtilities.h
//  ISSteganography
//
//  Created by Isaac Stevao Sena on 7/25/15.
//  Copyright (c) 2015 Black Bean. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

extern double const TIME_EXPECTATION;
extern NSString *const ORIGINAL_IMAGE_NAME;
extern NSString *const SMALL_IMAGE_NAME;
extern NSString *const BIG_IMAGE_NAME;
extern NSString *const STEGO_IMAGE_NAME;
extern NSString *const STEGO_IMAGE_TO_SAVE_NAME;
extern NSString *const TYPE_PNG;
extern NSString *const TYPE_JPG;
extern NSString *const TEXT_TO_HIDE;
extern NSString *const BIG_TEXT_TO_HIDE;

NSString *type();

@interface ISTestUtilities : NSObject

+ (UIImage *)imageNamed:(NSString *)name;

+ (UIImage *)imageNamed:(NSString *)name
                 ofType:(NSString *)type;

+ (NSString *)filePathToFilename:(NSString *)filename
                            type:(NSString *)type;

@end
