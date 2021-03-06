//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, SPSearchResult, SPSearchResultSection, SPUISearchResultsActionManager;

@interface SPUISearchResultsAction : NSObject
{
    _Bool _sendDestinationEngagementFeedback;
    SPSearchResult *_result;
    SPSearchResultSection *_section;
    NSArray *_urls;
    NSString *_cardTypeForFeedback;
    SPUISearchResultsActionManager *_actionManager;
}

+ (id)actionForResult:(id)arg1 inSection:(id)arg2;
@property(nonatomic) SPUISearchResultsActionManager *actionManager; // @synthesize actionManager=_actionManager;
@property(retain) NSString *cardTypeForFeedback; // @synthesize cardTypeForFeedback=_cardTypeForFeedback;
@property _Bool sendDestinationEngagementFeedback; // @synthesize sendDestinationEngagementFeedback=_sendDestinationEngagementFeedback;
@property(retain, nonatomic) NSArray *urls; // @synthesize urls=_urls;
@property(readonly) SPSearchResultSection *section; // @synthesize section=_section;
@property(readonly) SPSearchResult *result; // @synthesize result=_result;
- (void).cxx_destruct;
- (void)cancelAnimated:(_Bool)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (id)performWithCompletionBlock:(CDUnknownBlockType)arg1;

@end

