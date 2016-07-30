//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Metal/MTLArgument.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MTLArgumentInternal : MTLArgument
{
    NSString *_name;
    unsigned long long _type;
    unsigned long long _access;
    unsigned long long _index;
    _Bool _active;
}

- (_Bool)isActive;
- (unsigned long long)index;
- (unsigned long long)access;
- (unsigned long long)type;
- (id)name;
- (id)description;
- (id)describe;
- (unsigned long long)textureDataType;
- (unsigned long long)textureType;
- (unsigned long long)threadgroupMemoryDataSize;
- (unsigned long long)threadgroupMemoryAlignment;
- (id)bufferStructType;
- (unsigned long long)bufferDataType;
- (unsigned long long)bufferDataSize;
- (unsigned long long)bufferAlignment;
- (void)dealloc;
- (id)initWithName:(id)arg1 type:(unsigned long long)arg2 access:(unsigned long long)arg3 index:(unsigned long long)arg4 active:(_Bool)arg5;

@end

