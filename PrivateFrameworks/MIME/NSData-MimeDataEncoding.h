//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSData.h>

@interface NSData (MimeDataEncoding)
- (id)mf_encodeBase64HeaderData;
- (id)mf_encodeModifiedBase64;
- (id)mf_encodeBase64;
- (id)mf_encodeBase64WithoutLineBreaks;
- (id)mf_decodeModifiedBase64;
- (id)mf_decodeBase64InRange:(struct _NSRange *)arg1;
- (id)mf_decodeBase64;
- (id)mf_decodeUuencoded;
- (id)mf_decodeQuotedPrintableForText:(_Bool)arg1;
@end

