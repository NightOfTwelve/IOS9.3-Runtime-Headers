//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CFNetwork/NSCopying-Protocol.h>
#import <CFNetwork/NSSecureCoding-Protocol.h>

@class NSString, NSURL, NSURLResponseInternal;

@interface NSURLResponse : NSObject <NSSecureCoding, NSCopying>
{
    NSURLResponseInternal *_internal;
}

+ (_Bool)supportsSecureCoding;
+ (id)getObjectKeyWithIndex:(long long)arg1;
+ (id)_responseWithCFURLResponse:(struct _CFURLResponse *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *suggestedFilename;
@property(readonly) long long expectedContentLength;
@property(readonly, copy) NSString *textEncodingName;
@property(readonly, copy) NSString *MIMEType;
@property(readonly, copy) NSURL *URL;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithURL:(id)arg1 MIMEType:(id)arg2 expectedContentLength:(long long)arg3 textEncodingName:(id)arg4;
- (id)_initWithCFURLResponse:(struct _CFURLResponse *)arg1;
- (id)_peerCertificateChain;
- (void)dealloc;
- (double)_calculatedExpiration;
- (double)_freshnessLifetime;
- (_Bool)_mustRevalidate;
- (id)_lastModifiedDate;
- (void)_setMIMEType:(id)arg1;
- (void)_setExpectedContentLength:(long long)arg1;
- (struct _CFURLResponse *)_CFURLResponse;

@end

