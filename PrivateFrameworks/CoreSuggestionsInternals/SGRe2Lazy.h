//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreSuggestionsInternals/SGRe2.h>

@class NSString;

@interface SGRe2Lazy : SGRe2
{
    NSString *_regexp;
}

- (void).cxx_destruct;
- (id)description;
- (_Bool)_enumerateMatchesInUtf8:(const char *)arg1 fromString:(id)arg2 ngroups:(unsigned long long)arg3 block:(CDUnknownBlockType)arg4;
- (_Bool)matchesUtf8:(const char *)arg1;
- (_Bool)existsInUtf8:(const char *)arg1;
- (id)initWithRegexp:(id)arg1;

@end

