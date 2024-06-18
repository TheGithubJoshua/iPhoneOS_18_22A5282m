@class CNChangeHistoryAnchor;

@interface CNIndexClientState : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long indexVersion;
@property (nonatomic) BOOL isFullSyncDone;
@property (retain, nonatomic) CNChangeHistoryAnchor *fullSyncSnapshotAnchor;
@property (nonatomic) long long fullSyncOffset;

+ (id)clientStateWithData:(id)a0 logger:(id)a1;

- (id)initWithCoder:(id)a0;
- (id)data;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
