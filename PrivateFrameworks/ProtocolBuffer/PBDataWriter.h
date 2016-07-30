//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PBMutableData;

@interface PBDataWriter : NSObject
{
    PBMutableData *_data;
}

- (void)writeTag:(unsigned short)arg1 andType:(unsigned char)arg2;
- (void)writeBareVarint:(unsigned long long)arg1;
- (void)writeUint8:(unsigned char)arg1;
- (void)writeInt8:(BOOL)arg1;
- (void)writeProtoBuffer:(id)arg1;
- (void)writeBigEndianShortThenString:(id)arg1;
- (void)writeBigEndianFixed32:(unsigned int)arg1;
- (void)writeBigEndianFixed16:(unsigned short)arg1;
- (_Bool)writeData:(id)arg1;
- (unsigned long long)write:(const char *)arg1 maxLength:(unsigned long long)arg2;
- (void)writeData:(id)arg1 forTag:(unsigned short)arg2;
- (void)writeString:(id)arg1 forTag:(unsigned short)arg2;
- (void)writeSfixed64:(long long)arg1 forTag:(unsigned short)arg2;
- (void)writeSfixed32:(int)arg1 forTag:(unsigned short)arg2;
- (void)writeFixed64:(unsigned long long)arg1 forTag:(unsigned short)arg2;
- (void)writeFixed32:(unsigned int)arg1 forTag:(unsigned short)arg2;
- (void)writeFloat:(float)arg1 forTag:(unsigned short)arg2;
- (void)writeDouble:(double)arg1 forTag:(unsigned short)arg2;
- (void)writeSint64:(long long)arg1 forTag:(unsigned short)arg2;
- (void)writeSint32:(int)arg1 forTag:(unsigned short)arg2;
- (void)writeBOOL:(_Bool)arg1 forTag:(unsigned short)arg2;
- (void)writeUint64:(unsigned long long)arg1 forTag:(unsigned short)arg2;
- (void)writeUint32:(unsigned int)arg1 forTag:(unsigned short)arg2;
- (void)writeInt64:(long long)arg1 forTag:(unsigned short)arg2;
- (void)writeInt32:(int)arg1 forTag:(unsigned short)arg2;
- (id)immutableData;
- (id)data;
- (void)dealloc;
- (id)init;

@end

