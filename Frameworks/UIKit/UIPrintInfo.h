//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSCoding-Protocol.h>
#import <UIKit/NSCopying-Protocol.h>

@class NSString;

@interface UIPrintInfo : NSObject <NSCopying, NSCoding>
{
    NSString *_printerID;
    NSString *_jobName;
    long long _outputType;
    long long _orientation;
    long long _duplex;
    long long _copies;
    _Bool _scaleUp;
    _Bool _staple;
    _Bool _punch;
    NSString *_pdfPassword;
    NSString *_jobAccountID;
}

+ (id)printInfoWithDictionary:(id)arg1;
+ (id)printInfo;
@property(retain, nonatomic) NSString *jobAccountID; // @synthesize jobAccountID=_jobAccountID;
@property(nonatomic) _Bool punch; // @synthesize punch=_punch;
@property(nonatomic) _Bool staple; // @synthesize staple=_staple;
@property(nonatomic) long long copies; // @synthesize copies=_copies;
@property(retain, nonatomic) NSString *pdfPassword; // @synthesize pdfPassword=_pdfPassword;
@property(nonatomic) _Bool scaleUp; // @synthesize scaleUp=_scaleUp;
@property(nonatomic) long long duplex; // @synthesize duplex=_duplex;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) long long outputType; // @synthesize outputType=_outputType;
@property(copy, nonatomic) NSString *jobName; // @synthesize jobName=_jobName;
@property(copy, nonatomic) NSString *printerID; // @synthesize printerID=_printerID;
- (void).cxx_destruct;
- (id)_createPrintSettingsForPrinter:(id)arg1;
- (void)_updateWithPrinter:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (id)_initWithDictionary:(id)arg1;
- (id)init;

@end

