//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Radio/RadioManagedObjectWrapperProtocol-Protocol.h>

@class NSArray, NSManagedObject, NSString, RadioModel;

@interface RadioSkipHistory : NSObject <RadioManagedObjectWrapperProtocol>
{
    _Bool _databaseBacked;
    NSManagedObject *_managedObject;
    RadioModel *_model;
    NSString *_skipIdentifier;
    NSArray *_skipTimestamps;
    NSString *_stationHash;
    long long _stationID;
}

@property(readonly, nonatomic) RadioModel *model; // @synthesize model=_model;
@property(readonly, nonatomic) NSManagedObject *managedObject; // @synthesize managedObject=_managedObject;
@property(readonly, nonatomic, getter=isDatabaseBacked) _Bool databaseBacked; // @synthesize databaseBacked=_databaseBacked;
- (void).cxx_destruct;
@property(nonatomic) long long stationID; // @synthesize stationID=_stationID;
@property(copy, nonatomic) NSString *stationHash; // @synthesize stationHash=_stationHash;
@property(copy, nonatomic) NSArray *skipTimestamps; // @synthesize skipTimestamps=_skipTimestamps;
@property(copy, nonatomic) NSString *skipIdentifier; // @synthesize skipIdentifier=_skipIdentifier;
- (void)_radioModelWasDeletedNotification:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)dealloc;
- (id)initWithModel:(id)arg1 managedObject:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

