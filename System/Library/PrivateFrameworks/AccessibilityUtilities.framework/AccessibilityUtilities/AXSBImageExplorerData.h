@class NSString, NSArray;

@interface AXSBImageExplorerData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *hostAppBundleID;
@property (retain, nonatomic) NSString *hostAppName;
@property (retain, nonatomic) NSString *axLabel;
@property (retain, nonatomic) NSArray *customContent;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
