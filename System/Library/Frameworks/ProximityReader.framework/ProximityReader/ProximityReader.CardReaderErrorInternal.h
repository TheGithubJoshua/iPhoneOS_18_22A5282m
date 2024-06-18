@interface ProximityReader.CardReaderErrorInternal : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ code;
    void /* unknown type, empty encoding */ userInfo;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
