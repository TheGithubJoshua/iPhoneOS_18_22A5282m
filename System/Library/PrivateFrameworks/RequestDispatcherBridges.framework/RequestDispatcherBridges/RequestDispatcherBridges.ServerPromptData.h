@interface RequestDispatcherBridges.ServerPromptData : NSObject <AFContextSnapshot, NSSecureCoding> {
    void /* unknown type, empty encoding */ legacyNLContext;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)serializedBackingStore;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithSerializedBackingStore:(id)a0;

@end
