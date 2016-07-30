//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSSerializerStream-Protocol.h>

@interface NSAKSerializerStream : NSObject <NSSerializerStream>
{
    void *memory;
    unsigned long long current;
    unsigned long long max;
    struct __CFDictionary *roomForIntLocations;
}

- (void)copySerializationInto:(void *)arg1;
- (_Bool)writeToPath:(id)arg1 safely:(_Bool)arg2;
- (void)writeDelayedInt:(unsigned long long)arg1 for:(int)arg2;
- (unsigned long long)writeRoomForInt:(int *)arg1;
- (unsigned long long)writeData:(const void *)arg1 length:(unsigned long long)arg2;
- (unsigned long long)writeAlignedDataSize:(unsigned long long)arg1;
- (unsigned long long)writeInt:(unsigned long long)arg1;
- (void)finalize;
- (void)dealloc;

@end

