//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSSet.h>

__attribute__((visibility("hidden")))
@interface __NSSingleObjectSetI : NSSet
{
    id element;
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)__new:(id)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)getObjects:(id *)arg1 count:(unsigned long long)arg2;
- (id)objectEnumerator;
- (id)member:(id)arg1;
- (unsigned long long)count;
- (void)finalize;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

