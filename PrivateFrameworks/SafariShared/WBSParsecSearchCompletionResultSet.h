//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSString;

@interface WBSParsecSearchCompletionResultSet : NSObject
{
    NSArray *_patternStrings;
    NSMutableDictionary *_patternStringsToPatterns;
    NSString *_status;
    NSString *_errorCodeString;
    NSString *_completionString;
    NSString *_prefix;
    NSString *_feedbackQueryIdentifier;
    NSArray *_results;
    double _maxAge;
    double _completionScore;
}

+ (id)resultSetWithDictionary:(id)arg1 cache:(id)arg2;
+ (id)resultSetSchemaWithCache:(id)arg1;
@property(readonly, nonatomic) double completionScore; // @synthesize completionScore=_completionScore;
@property(readonly, nonatomic) double maxAge; // @synthesize maxAge=_maxAge;
@property(readonly, nonatomic) NSArray *results; // @synthesize results=_results;
@property(readonly, nonatomic) NSString *feedbackQueryIdentifier; // @synthesize feedbackQueryIdentifier=_feedbackQueryIdentifier;
@property(readonly, nonatomic) NSString *prefix; // @synthesize prefix=_prefix;
@property(readonly, nonatomic) NSString *completionString; // @synthesize completionString=_completionString;
@property(readonly, nonatomic) NSString *errorCodeString; // @synthesize errorCodeString=_errorCodeString;
@property(copy, nonatomic) NSString *status; // @synthesize status=_status;
- (void).cxx_destruct;
- (void)enumeratePatternsUsingBlock:(CDUnknownBlockType)arg1;
- (id)_initWithDictionary:(id)arg1 cache:(id)arg2;

@end

