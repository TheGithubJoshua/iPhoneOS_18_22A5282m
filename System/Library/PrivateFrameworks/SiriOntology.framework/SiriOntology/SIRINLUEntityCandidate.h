@class USOSerializedGraph, NSString, SIRINLURRGroupIdentifier, NSArray;

@interface SIRINLUEntityCandidate : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) USOSerializedGraph *entity;
@property double score;
@property (retain, nonatomic) NSString *entityId;
@property (retain, nonatomic) NSString *appBundleId;
@property (retain, nonatomic) SIRINLURRGroupIdentifier *groupId;
@property (retain, nonatomic) NSArray *annotations;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithEntity:(id)a0 score:(double)a1 entityId:(id)a2 appBundleId:(id)a3 groupId:(id)a4 annotations:(id)a5;
- (id)initWithEntity:(id)a0 score:(double)a1;

@end
