@class NSXPCConnection;

@interface FontServicesDaemonManager : NSObject <FontServicesClientProtocol>

@property (retain, nonatomic) NSXPCConnection *connection;

+ (id)sharedManager;

- (void)synchronizeFontAssets:(id)a0 reply:(id /* block */)a1;
- (void)fontChanged:(id)a0 reply:(id /* block */)a1;
- (void)fontAddedInfo:(id)a0 addedURLStrings:(id)a1 removedURLStrings:(id)a2;
- (void)scheduleFontFilesDeletion:(id)a0;
- (void)checkinForWebKitProcess:(id)a0 reply:(id /* block */)a1;
- (void)resumeAndShowAlertForSuspendedFontProviders;
- (void).cxx_destruct;
- (void)resetIssuedFontsFor:(id)a0;
- (void)requestFonts:(id)a0 reply:(id /* block */)a1;
- (void)checkinForFontPicker:(id /* block */)a0;
- (void)checkin:(id /* block */)a0;
- (void)updatingUserFonts:(id /* block */)a0;
- (void)requestFonts:(id)a0 forClient:(id)a1;

@end
