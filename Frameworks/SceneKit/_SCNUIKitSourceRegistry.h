//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _SCNUIKitSourceRegistry : NSObject
{
    NSMutableArray *_sources;
}

+ (void)unregisterUIKitSource:(id)arg1;
+ (void)registerUIKitSource:(id)arg1;
+ (id)sharedInstance;
- (void)apply:(CDUnknownBlockType)arg1;
- (void)remove:(id)arg1;
- (void)add:(id)arg1;
- (void)dealloc;
- (id)init;

@end

