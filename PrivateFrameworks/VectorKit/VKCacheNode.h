//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VKCacheNode : NSObject
{
    struct VKCacheKey _key;
    id _value;
    VKCacheNode *_next;
    VKCacheNode *_previous;
}

@property(nonatomic) VKCacheNode *previous; // @synthesize previous=_previous;
@property(retain, nonatomic) VKCacheNode *next; // @synthesize next=_next;
@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(nonatomic) struct VKCacheKey key; // @synthesize key=_key;
- (void)dealloc;

@end

