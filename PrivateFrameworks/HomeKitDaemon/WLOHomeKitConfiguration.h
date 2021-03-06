//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WLOHomeKitConfiguration : NSObject
{
    unsigned int _numHomes;
    unsigned int _numAccessories;
    unsigned int _numServices;
    unsigned int _numUsers;
    unsigned int _numTriggers;
    unsigned int _numRooms;
    unsigned int _numZones;
    unsigned int _numAccessoryServiceGroups;
    unsigned int _databaseSize;
}

@property unsigned int databaseSize; // @synthesize databaseSize=_databaseSize;
@property unsigned int numAccessoryServiceGroups; // @synthesize numAccessoryServiceGroups=_numAccessoryServiceGroups;
@property unsigned int numZones; // @synthesize numZones=_numZones;
@property unsigned int numRooms; // @synthesize numRooms=_numRooms;
@property unsigned int numTriggers; // @synthesize numTriggers=_numTriggers;
@property unsigned int numUsers; // @synthesize numUsers=_numUsers;
@property unsigned int numServices; // @synthesize numServices=_numServices;
@property unsigned int numAccessories; // @synthesize numAccessories=_numAccessories;
@property unsigned int numHomes; // @synthesize numHomes=_numHomes;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;

@end

