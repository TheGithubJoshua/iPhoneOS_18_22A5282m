@class NSDictionary;

@interface _ICQXMLSpecification : NSObject {
    NSDictionary *_placeholderInfo;
}

- (id)initWithPlaceholderInfo:(id)a0;
- (id)placeholderReplacementsWithDeviceInfo:(id)a0;
- (void).cxx_destruct;
- (id)stringForPlaceholder:(id)a0 withDeviceInfo:(id)a1;
- (id)stringForPlaceholder:(id)a0;

@end
