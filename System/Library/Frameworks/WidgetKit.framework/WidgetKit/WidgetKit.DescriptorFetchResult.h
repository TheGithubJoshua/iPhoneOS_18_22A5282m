@interface WidgetKit.DescriptorFetchResult : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ widgetDescriptors;
    void /* unknown type, empty encoding */ activityDescriptors;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
