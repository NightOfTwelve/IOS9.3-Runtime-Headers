//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSDictionary.h>

__attribute__((visibility("hidden")))
@interface NSOwnedDictionaryProxy : NSDictionary
{
    id _owner;
}

- (id)objectForKey:(id)arg1;
- (id)keyEnumerator;
- (unsigned long long)count;
- (void)superRelease;
- (oneway void)release;
- (id)retain;
- (id)initWithOwner:(id)arg1;

@end

