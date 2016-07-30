//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CorePDF/CPDisposable-Protocol.h>

@interface CPFontInfo : NSObject <CPDisposable>
{
    struct __CFData *fontData;
    const char *dataPtr;
    unsigned int offset;
    unsigned int fontDataLength;
    _Bool valid;
}

- (struct __CFData *)newKernData;
- (int)kernUnitsPerEm;
- (_Bool)getDescriptor:(CDStruct_05724ab2 *)arg1;
- (struct CGRect)readRect;
- (float)readFloat;
- (int)readLong;
- (unsigned int)readUnsignedLong;
- (unsigned char)readByte;
- (void)dealloc;
- (void)finalize;
- (void)dispose;
- (id)initWithFontData:(struct __CFData *)arg1;

@end

