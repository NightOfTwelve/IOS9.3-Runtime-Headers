//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface GEOTileKeyMap : NSObject
{
    long long _type;
    void *_map;
}

- (unsigned long long)count;
- (void)removeObjectForKey:(const struct _GEOTileKey *)arg1;
- (void)setObject:(id)arg1 forKey:(const struct _GEOTileKey *)arg2;
- (id)objectForKey:(const struct _GEOTileKey *)arg1;
- (id)contentsDescription;
- (void)dealloc;
- (id)initWithMapType:(long long)arg1;

@end

