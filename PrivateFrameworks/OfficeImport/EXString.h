//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface EXString : NSObject
{
}

+ (void)replaceEscapeAsciiCodes:(id)arg1;
+ (id)readStringWithAsciiCodeFromXmlStringElement:(struct _xmlNode *)arg1;
+ (id)edStringWithRunsFromXmlDivElement:(struct _xmlNode *)arg1 state:(id)arg2;
+ (id)edStringWithRunsFromXmlStringElement:(struct _xmlNode *)arg1 state:(id)arg2;
+ (id)edTextFromXmlStringElement:(struct _xmlNode *)arg1 state:(id)arg2;
+ (id)cleanupWhitespace:(id)arg1;
+ (id)stringInEDString:(id)arg1 forRunIndex:(unsigned int)arg2;
+ (id)stringInEDString:(id)arg1 start:(unsigned long long)arg2 end:(unsigned long long)arg3;
+ (void)buildEDString:(id)arg1 fromText:(id)arg2 edFont:(id)arg3 keepWhitespace:(_Bool)arg4 state:(id)arg5;
+ (void)buildEDString:(id)arg1 fromNode:(struct _xmlNode *)arg2 edFont:(id)arg3 keepWhitespace:(_Bool)arg4 state:(id)arg5;
+ (void)buildEDString:(id)arg1 fromChildrenOfNode:(struct _xmlNode *)arg2 edFont:(id)arg3 keepWhitespace:(_Bool)arg4 state:(id)arg5;
+ (void)parseStringWithAsciiCode:(id)arg1;

@end

