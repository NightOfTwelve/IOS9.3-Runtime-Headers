//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface PFZlibDataDecompressionOptions : NSObject
{
    _Bool _decompressAllAtOnce;
    int _windowBits;
    CDUnknownBlockType _createBuffer;
    CDUnknownBlockType _growData;
}

+ (id)defaultOptions;
@property(nonatomic) _Bool decompressAllAtOnce; // @synthesize decompressAllAtOnce=_decompressAllAtOnce;
@property(copy, nonatomic) CDUnknownBlockType growData; // @synthesize growData=_growData;
@property(copy, nonatomic) CDUnknownBlockType createBuffer; // @synthesize createBuffer=_createBuffer;
@property(nonatomic) int windowBits; // @synthesize windowBits=_windowBits;
- (void).cxx_destruct;

@end

