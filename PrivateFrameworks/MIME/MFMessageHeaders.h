//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MIME/NSCopying-Protocol.h>

@class NSData;

@interface MFMessageHeaders : NSObject <NSCopying>
{
    NSData *_data;
    unsigned int _preferredEncoding;
}

+ (id)uniqueHeaderKeyStringForString:(id)arg1;
+ (id)encodedDataForAddressList:(id)arg1 splittingAtLength:(unsigned long long)arg2 firstLineBuffer:(unsigned long long)arg3;
+ (id)addressListFromEncodedString:(id)arg1;
+ (id)copyAddressListFromEncodedData:(id)arg1 encoding:(unsigned int)arg2;
+ (_Bool)shouldDecodeHeaderForKey:(id)arg1;
+ (_Bool)isStructuredHeaderKey:(id)arg1;
+ (id)basicHeaders;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
- (id)description;
- (void)appendHeaderData:(id)arg1 andRecipients:(id)arg2;
- (id)encodedHeaders;
- (_Bool)messageIsFromEntourage;
- (id)_decodeHeaderKeysFromData:(id)arg1;
- (id)copyFirstStringValueForKey:(id)arg1;
- (id)copyFirstNonDecodedHeaderForKey:(id)arg1;
- (id)copyFirstHeaderForKey:(id)arg1;
- (id)firstHeaderForKey:(id)arg1;
- (id)references;
- (id)copyAddressListForReplyTo;
- (id)copyAddressListForResentFrom;
- (id)copyAddressListForBcc;
- (id)copyAddressListForCc;
- (id)copyAddressListForTo;
- (id)firstSenderAddress;
- (id)copyAddressListForSender;
- (id)_copyAddressListForKey:(id)arg1;
- (id)headersForKey:(id)arg1;
- (id)copyHeadersForKey:(id)arg1;
- (_Bool)hasHeaderForKey:(id)arg1;
- (id)_headerValueForKey:(id)arg1;
- (id)_copyHeaderValueForKey:(id)arg1;
- (id)_headerValueForKey:(id)arg1 offset:(unsigned long long *)arg2;
- (id)_copyHeaderValueForKey:(id)arg1 offset:(unsigned long long *)arg2 decoded:(_Bool)arg3;
- (id)copyDecodedStringFromHeaderData:(id)arg1 withRange:(struct _NSRange)arg2;
- (unsigned int)_contentTypeEncoding;
- (id)_capitalizedKeyForKey:(id)arg1;
- (void)_setCapitalizedKey:(id)arg1 forKey:(id)arg2;
- (id)headersDictionary;
- (id)allHeaderKeys;
- (_Bool)_isStructuredHeaderKey:(id)arg1;
@property(nonatomic) unsigned int preferredEncoding;
- (id)headerData;
- (id)mutableCopy;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithHeaderData:(id)arg1 encoding:(unsigned int)arg2;
- (id)init;

@end

