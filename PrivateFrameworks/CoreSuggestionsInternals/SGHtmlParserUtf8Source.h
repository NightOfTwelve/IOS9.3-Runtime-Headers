//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface SGHtmlParserUtf8Source : NSObject
{
    const char *_ascii;
    NSString *_text;
    NSData *_contentData;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isAscii;
- (void)withUtf8FromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 callback:(CDUnknownBlockType)arg3;
- (id)initWithString:(id)arg1 contentData:(id)arg2 contentDataEncoding:(unsigned long long)arg3;

@end

