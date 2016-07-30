//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOCMTicketFollowupResponse, GEOCMTicketStatusResponse, GEOCMTicketSubmissionResponse;

@interface GEOCMCommunityResponse : PBCodable <NSCopying>
{
    int _requestType;
    int _statusCode;
    GEOCMTicketFollowupResponse *_ticketFollowupResponse;
    GEOCMTicketStatusResponse *_ticketStatusResponse;
    GEOCMTicketSubmissionResponse *_ticketSubmissionResponse;
    struct {
        unsigned int requestType:1;
        unsigned int statusCode:1;
    } _has;
}

@property(retain, nonatomic) GEOCMTicketStatusResponse *ticketStatusResponse; // @synthesize ticketStatusResponse=_ticketStatusResponse;
@property(retain, nonatomic) GEOCMTicketFollowupResponse *ticketFollowupResponse; // @synthesize ticketFollowupResponse=_ticketFollowupResponse;
@property(retain, nonatomic) GEOCMTicketSubmissionResponse *ticketSubmissionResponse; // @synthesize ticketSubmissionResponse=_ticketSubmissionResponse;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasTicketStatusResponse;
@property(readonly, nonatomic) _Bool hasTicketFollowupResponse;
@property(readonly, nonatomic) _Bool hasTicketSubmissionResponse;
@property(nonatomic) _Bool hasRequestType;
@property(nonatomic) int requestType; // @synthesize requestType=_requestType;
@property(nonatomic) _Bool hasStatusCode;
@property(nonatomic) int statusCode; // @synthesize statusCode=_statusCode;
- (void)dealloc;

@end

