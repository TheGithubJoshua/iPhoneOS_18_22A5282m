@interface SCUpdateAdsUserIDCommand : NSObject <SCWZoneCommand> {
    void /* unknown type, empty encoding */ userID;
    void /* unknown type, empty encoding */ userIDCreatedDate;
    void /* unknown type, empty encoding */ overwrite;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)executeWithZone:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
