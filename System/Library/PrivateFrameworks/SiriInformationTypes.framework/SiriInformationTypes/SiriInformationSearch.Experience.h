@interface SiriInformationSearch.Experience : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ pluginIdentifier;
    void /* unknown type, empty encoding */ queryConfidence;
    void /* unknown type, empty encoding */ associatedEntities;
    void /* unknown type, empty encoding */ userDialogAct;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
