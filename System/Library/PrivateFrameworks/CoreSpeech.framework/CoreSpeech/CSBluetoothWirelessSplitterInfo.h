@class NSMutableArray;

@interface CSBluetoothWirelessSplitterInfo : NSObject {
    NSMutableArray *_splitterDeviceList;
}

@property (nonatomic) BOOL splitterEnabled;
@property (readonly, nonatomic) BOOL shouldDisableSpeakerVerificationInSplitterMode;

- (id)init;
- (unsigned long long)splitterState;
- (void).cxx_destruct;
- (id)description;
- (void)addDeviceIntoSplitterDeviceList:(id)a0;
- (id)splitterDeviceList;
- (BOOL)_hasDeviceTemporaryPairedNotInContacts;

@end
