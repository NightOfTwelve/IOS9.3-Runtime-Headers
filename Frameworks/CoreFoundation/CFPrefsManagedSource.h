//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreFoundation/CFPrefsPlistSource.h>

__attribute__((visibility("hidden")))
@interface CFPrefsManagedSource : CFPrefsPlistSource
{
}

+ (void)withSourceForIdentifier:(struct __CFString *)arg1 user:(struct __CFString *)arg2 perform:(CDUnknownBlockType)arg3;
- (void)alreadylocked_setValues:(const void **)arg1 forKeys:(const struct __CFString **)arg2 count:(long long)arg3;
- (long long)sendMessageSettingValue:(void *)arg1 forKey:(struct __CFString *)arg2;
- (_Bool)managed;
- (id)initWithDomain:(struct __CFString *)arg1 user:(struct __CFString *)arg2 byHost:(_Bool)arg3;

@end

