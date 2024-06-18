@interface PhotosUIApps.PhotosDetailsTimeWidgetViewModel : PhotosUIApps.PhotosDetailsWidgetViewModel {
    void /* unknown type, empty encoding */ fileName;
    void /* unknown type, empty encoding */ isiCloudEnabled;
    void /* unknown type, empty encoding */ isSyndicatedGuestAsset;
    void /* unknown type, empty encoding */ _cloudLocalState;
    void /* unknown type, empty encoding */ _date;
    void /* unknown type, empty encoding */ _timeZone;
}

- (void).cxx_destruct;
- (void)photoLibraryDidChange:(id)a0;
- (void)clipBoardChangedWithPasteboardNotification:(id)a0;

@end
