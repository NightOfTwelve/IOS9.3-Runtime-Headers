//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Search/NSSecureCoding-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SPFeedbackSpeechResult : NSObject <NSSecureCoding>
{
    _Bool _stable;
    NSString *_text;
    double _timestamp;
    unsigned long long _webResultsSize;
    unsigned long long _spotlightResultsSize;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) unsigned long long spotlightResultsSize; // @synthesize spotlightResultsSize=_spotlightResultsSize;
@property(nonatomic) unsigned long long webResultsSize; // @synthesize webResultsSize=_webResultsSize;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) _Bool stable; // @synthesize stable=_stable;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithText:(id)arg1 stable:(_Bool)arg2 timestamp:(double)arg3 webResultsSize:(unsigned long long)arg4 spotlightResultsSize:(unsigned long long)arg5;

@end

