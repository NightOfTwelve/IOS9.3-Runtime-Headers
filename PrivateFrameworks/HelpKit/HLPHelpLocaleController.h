//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HelpKit/HLPRemoteDataController.h>

@class NSArray, NSURL;

@interface HLPHelpLocaleController : HLPRemoteDataController
{
    NSURL *_helpBookURL;
    NSArray *_locales;
}

@property(retain, nonatomic) NSArray *locales; // @synthesize locales=_locales;
- (void).cxx_destruct;
- (id)currentLocale;
- (void)processData:(id)arg1 formattedData:(id)arg2;
- (void)processFileURLWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithURL:(id)arg1;

@end

