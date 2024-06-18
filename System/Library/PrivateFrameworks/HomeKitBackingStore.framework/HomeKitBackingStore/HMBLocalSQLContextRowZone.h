@class NSUUID;
@protocol HMBLocalZoneID;

@interface HMBLocalSQLContextRowZone : HMFObject

@property (nonatomic) unsigned long long zoneRow;
@property (retain, nonatomic) id<HMBLocalZoneID> identifier;
@property (retain, nonatomic) NSUUID *replication;

- (id)init;
- (id)initWithZoneRow:(unsigned long long)a0 name:(id)a1 token:(id)a2;
- (void).cxx_destruct;
- (id)description;
- (id)debugDescription;
- (id)initWithZoneRow:(unsigned long long)a0;

@end
