@class NSString;

@interface SKEStartExecutionTurn : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ executionRequestId;
    void /* unknown type, empty encoding */ isTapToEdit;
    void /* unknown type, empty encoding */ isMUXEnabled;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
