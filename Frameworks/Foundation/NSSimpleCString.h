//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSSimpleCString : NSString
{
    char *bytes;
    int numBytes;
    int _unused;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
- (void)finalize;
- (void)dealloc;
- (id)stringByAppendingString:(id)arg1;
- (id)_newSubstringWithRange:(struct _NSRange)arg1 zone:(struct _NSZone *)arg2;
- (_Bool)getBytes:(void *)arg1 maxLength:(unsigned long long)arg2 usedLength:(unsigned long long *)arg3 encoding:(unsigned long long)arg4 options:(unsigned long long)arg5 range:(struct _NSRange)arg6 remainingRange:(struct _NSRange *)arg7;
- (unsigned long long)hash;
- (_Bool)hasSuffix:(id)arg1;
- (_Bool)hasPrefix:(id)arg1;
- (long long)compare:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3;
- (_Bool)isEqualToString:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (const char *)_fastCStringContents:(_Bool)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)canBeConvertedToEncoding:(unsigned long long)arg1;
- (unsigned long long)smallestEncoding;
- (unsigned long long)fastestEncoding;
- (unsigned long long)cStringLength;
- (unsigned long long)length;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (id)initWithCStringNoCopy:(char *)arg1 length:(unsigned long long)arg2;

@end

