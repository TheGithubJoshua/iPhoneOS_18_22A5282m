@class NSString;

@interface TVRCDeviceInfo : NSObject {
    NSString *_mediaRemoteID;
    NSString *_airplayID;
}

@property (readonly) NSString *mediaRemoteID;
@property (readonly) NSString *airplayID;

- (void).cxx_destruct;
- (id)description;
- (void)_populateValidIdentifiers:(id)a0;
- (BOOL)containsID:(id)a0;

@end
