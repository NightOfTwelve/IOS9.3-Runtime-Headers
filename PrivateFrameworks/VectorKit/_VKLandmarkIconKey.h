//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _VKLandmarkIconKey : NSObject
{
    struct VKIconStyleInfo _style;
    NSString *_name;
    long long _size;
}

- (id).cxx_construct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initWithName:(id)arg1 style:(struct VKIconStyleInfo *)arg2 size:(long long)arg3;

@end
