//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VKRoadSignSourceImageGenerator : NSObject
{
}

+ (void)_drawSign:(long long)arg1 context:(struct CGContext *)arg2 scale:(double)arg3 contentScale:(double)arg4 signColor:(long long)arg5;
+ (struct CGSize)_sizeForSignType:(long long)arg1 scale:(double)arg2 contentScale:(double)arg3;
+ (struct CGImage *)newImageForSignType:(long long)arg1 isOffRoute:(_Bool)arg2 scale:(double)arg3 contentScale:(double)arg4;

@end
