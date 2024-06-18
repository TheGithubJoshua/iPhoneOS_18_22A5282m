@class RadiosPreferences, CoreTelephonyClient;

@interface HKMobileCountryCodeManager : NSObject <HKCurrentCountryCodeProvider> {
    CoreTelephonyClient *_coreTelephonyClient;
    struct __CTServerConnection { } *_coreTelephonyServerConnection;
    RadiosPreferences *_radiosPreferences;
}

+ (id)overrideMobileCountryCode;
+ (void)setOverrideMobileCountryCode:(id)a0;
+ (BOOL)isOverridePresent;
+ (id)_overrideISOCountryCode;

- (id)init;
- (id)_wrapperWithMobileCountryCode:(id)a0 error:(id *)a1;
- (void)_submitAnalyticsForError:(id)a0 mobileCountryCode:(id)a1;
- (id)copyISOCountryCodeForMobileCountryCode:(id)a0 error:(id *)a1;
- (BOOL)_isLocationAvailableWithError:(id *)a0;
- (id)currentCountryCode;
- (void)fetchMobileCountryCodeFromCellularWithCompletion:(id /* block */)a0;
- (id)mobileCountryCodeFromCellularWithError:(id *)a0;
- (void).cxx_destruct;
- (void)fetchISOCountryCodeFromCellularWithCompletion:(id /* block */)a0;
- (void)dealloc;

@end
