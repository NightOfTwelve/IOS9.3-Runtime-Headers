//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSString;

@interface IMXMLParserContext : NSObject
{
    NSData *_inContentAsData;
}

@property(readonly, retain) NSData *inContentAsData; // @synthesize inContentAsData=_inContentAsData;
@property(readonly, retain) NSArray *resultsForLogging;
@property(readonly, retain) NSString *name;
- (id)inContent;
- (void)reset;
- (void)dealloc;
- (id)initWithContentAsData:(id)arg1;
- (id)initWithContent:(id)arg1;

@end

