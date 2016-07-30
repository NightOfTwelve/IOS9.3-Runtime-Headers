//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/EQKitMathMLNode.h>

#import <TSReading/EQKitLayoutSchemataStack-Protocol.h>
#import <TSReading/EQKitMathMLNode-Protocol.h>

@class NSArray, NSString;

@interface EQKitMathMLMStack : EQKitMathMLNode <EQKitMathMLNode, EQKitLayoutSchemataStack>
{
    NSArray *mChildren;
    int mAlign;
}

- (_Bool)isBaseFontNameUsed;
- (int)schemataAlign;
- (id)schemataChildren;
- (struct Schemata)layoutSchemata;
- (void)dealloc;
- (id)initWithChildren:(id)arg1;
- (const set_386565a4 *)mathMLAttributes;
- (id)initFromXMLNode:(struct _xmlNode *)arg1 parser:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
