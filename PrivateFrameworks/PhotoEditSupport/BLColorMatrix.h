//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface BLColorMatrix : NSObject
{
}

+ (CDStruct_9b5b21f5)warmCoolMatrix:(float)arg1;
+ (CDStruct_9b5b21f5)matrix:(float)arg1 numBlocks:(int)arg2 matrices:(CDStruct_9b5b21f5 *)arg3;
+ (CDStruct_9b5b21f5)mix:(float)arg1 matrix1:(CDStruct_9b5b21f5)arg2 matrix2:(CDStruct_9b5b21f5)arg3;
+ (CDStruct_818bb265)mix:(float)arg1 channelMix1:(CDStruct_818bb265)arg2 channelMix2:(CDStruct_818bb265)arg3;

@end

