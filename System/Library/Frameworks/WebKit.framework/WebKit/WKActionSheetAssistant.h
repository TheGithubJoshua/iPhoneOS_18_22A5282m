@class NSString;
@protocol WKActionSheetAssistantDelegate;

@interface WKActionSheetAssistant : NSObject <WKActionSheetDelegate, DDDetectionControllerInteractionDelegate, UIContextMenuInteractionDelegate> {
    struct WeakObjCPtr<id<WKActionSheetAssistantDelegate>> { id m_weakReference; } _delegate;
    struct RetainPtr<WKActionSheet> { void *m_ptr; } _interactionSheet;
    struct RetainPtr<_WKActivatedElementInfo> { void *m_ptr; } _elementInfo;
    struct optional<WebKit::InteractionInformationAtPosition> { union { char __null_state_; struct InteractionInformationAtPosition { struct InteractionInformationRequest { struct IntPoint { int m_x; int m_y; } point; BOOL includeSnapshot; BOOL includeLinkIndicator; BOOL includeCaretContext; BOOL includeHasDoubleClickHandler; BOOL includeImageData; BOOL linkIndicatorShouldHaveLegacyMargins; BOOL disallowUserAgentShadowContent; } request; BOOL canBeValid; struct optional<bool> { union { char __null_state_; BOOL __val_; } ; BOOL __engaged_; } nodeAtPositionHasDoubleClickHandler; unsigned char selectability; BOOL isSelected; BOOL prefersDraggingOverTextSelection; BOOL isNearMarkedText; BOOL touchCalloutEnabled; BOOL isLink; BOOL isImage; BOOL isAttachment; BOOL isAnimatedImage; BOOL isPausedVideo; BOOL isElement; BOOL isContentEditable; unsigned long long containerScrollingNodeID; BOOL isDataDetectorLink; BOOL preventTextInteraction; BOOL elementContainsImageOverlay; BOOL shouldNotUseIBeamInEditableContent; BOOL isImageOverlayText; BOOL isVerticalWritingMode; struct FloatPoint { float m_x; float m_y; } adjustedPointForNodeRespondingToClickEvents; struct URL { struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *m_ptr; } m_impl; } m_string; unsigned char m_isValid : 1; unsigned char m_protocolIsInHTTPFamily : 1; unsigned char m_cannotBeABaseURL : 1; unsigned char m_portLength : 3; unsigned int m_schemeEnd : 26; unsigned int m_userStart; unsigned int m_userEnd; unsigned int m_passwordEnd; unsigned int m_hostEnd; unsigned int m_pathAfterLastSlash; unsigned int m_pathEnd; unsigned int m_queryEnd; } url; struct URL { struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *m_ptr; } m_impl; } m_string; unsigned char m_isValid : 1; unsigned char m_protocolIsInHTTPFamily : 1; unsigned char m_cannotBeABaseURL : 1; unsigned char m_portLength : 3; unsigned int m_schemeEnd : 26; unsigned int m_userStart; unsigned int m_userEnd; unsigned int m_passwordEnd; unsigned int m_hostEnd; unsigned int m_pathAfterLastSlash; unsigned int m_pathEnd; unsigned int m_queryEnd; } imageURL; struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *m_ptr; } m_impl; } imageMIMEType; struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *m_ptr; } m_impl; } title; struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *m_ptr; } m_impl; } idAttribute; struct IntRect { struct IntPoint { int m_x; int m_y; } m_location; struct IntSize { int m_width; int m_height; } m_size; } bounds; struct RefPtr<WebKit::ShareableBitmap, WTF::RawPtrTraits<WebKit::ShareableBitmap>, WTF::DefaultRefDerefTraits<WebKit::ShareableBitmap>> { struct ShareableBitmap *m_ptr; } image; struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *m_ptr; } m_impl; } textBefore; struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *m_ptr; } m_impl; } textAfter; float caretLength; struct FloatRect { struct FloatPoint { float m_x; float m_y; } m_location; struct FloatSize { float m_width; float m_height; } m_size; } lineCaretExtent; struct optional<WebCore::Cursor> { union { char __null_state_; struct Cursor { int m_type; struct RefPtr<WebCore::Image, WTF::RawPtrTraits<WebCore::Image>, WTF::DefaultRefDerefTraits<WebCore::Image>> { struct Image *m_ptr; } m_image; struct IntPoint { int m_x; int m_y; } m_hotSpot; void *m_platformCursor; } __val_; } ; BOOL __engaged_; } cursor; struct TextIndicatorData { struct FloatRect { struct FloatPoint { float m_x; float m_y; } m_location; struct FloatSize { float m_width; float m_height; } m_size; } selectionRectInRootViewCoordinates; struct FloatRect { struct FloatPoint { float m_x; float m_y; } m_location; struct FloatSize { float m_width; float m_height; } m_size; } textBoundingRectInRootViewCoordinates; struct FloatRect { struct FloatPoint { float m_x; float m_y; } m_location; struct FloatSize { float m_width; float m_height; } m_size; } contentImageWithoutSelectionRectInRootViewCoordinates; struct Vector<WebCore::FloatRect, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { struct FloatRect *m_buffer; unsigned int m_capacity; unsigned int m_size; } textRectsInBoundingRectCoordinates; float contentImageScaleFactor; struct RefPtr<WebCore::Image, WTF::RawPtrTraits<WebCore::Image>, WTF::DefaultRefDerefTraits<WebCore::Image>> { struct Image *m_ptr; } contentImageWithHighlight; struct RefPtr<WebCore::Image, WTF::RawPtrTraits<WebCore::Image>, WTF::DefaultRefDerefTraits<WebCore::Image>> { struct Image *m_ptr; } contentImageWithoutSelection; struct RefPtr<WebCore::Image, WTF::RawPtrTraits<WebCore::Image>, WTF::DefaultRefDerefTraits<WebCore::Image>> { struct Image *m_ptr; } contentImage; struct Color { unsigned long long m_colorAndFlags; } estimatedBackgroundColor; unsigned char presentationTransition; struct OptionSet<WebCore::TextIndicatorOption> { unsigned short m_storage; } options; } linkIndicator; struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *m_ptr; } m_impl; } dataDetectorIdentifier; struct RetainPtr<NSArray> { void *m_ptr; } dataDetectorResults; struct IntRect { struct IntPoint { int m_x; int m_y; } m_location; struct IntSize { int m_width; int m_height; } m_size; } dataDetectorBounds; struct optional<WebCore::ElementContext> { union { char __null_state_; struct ElementContext { struct FloatRect { struct FloatPoint { float m_x; float m_y; } m_location; struct FloatSize { float m_width; float m_height; } m_size; } boundingRect; struct ObjectIdentifier<WebCore::PageIdentifierType> { unsigned long long m_identifier; } webPageIdentifier; struct ProcessQualified<WTF::UUID> { struct UUID { unsigned __int128 m_data; } m_object; struct ObjectIdentifier<WebCore::ProcessIdentifierType> { unsigned long long m_identifier; } m_processIdentifier; } documentIdentifier; struct ObjectIdentifier<WebCore::ElementIdentifierType> { unsigned long long m_identifier; } elementIdentifier; } __val_; } ; BOOL __engaged_; } elementContext; struct optional<WebCore::ElementContext> { union { char __null_state_; struct ElementContext { struct FloatRect { struct FloatPoint { float m_x; float m_y; } m_location; struct FloatSize { float m_width; float m_height; } m_size; } boundingRect; struct ObjectIdentifier<WebCore::PageIdentifierType> { unsigned long long m_identifier; } webPageIdentifier; struct ProcessQualified<WTF::UUID> { struct UUID { unsigned __int128 m_data; } m_object; struct ObjectIdentifier<WebCore::ProcessIdentifierType> { unsigned long long m_identifier; } m_processIdentifier; } documentIdentifier; struct ObjectIdentifier<WebCore::ElementIdentifierType> { unsigned long long m_identifier; } elementIdentifier; } __val_; } ; BOOL __engaged_; } hostImageOrVideoElementContext; } __val_; } ; BOOL __engaged_; } _positionInformation;
    struct RetainPtr<UIContextMenuInteraction> { void *m_ptr; } _dataDetectorContextMenuInteraction;
    struct RetainPtr<UIContextMenuInteraction> { void *m_ptr; } _mediaControlsContextMenuInteraction;
    struct RetainPtr<UIMenu> { void *m_ptr; } _mediaControlsContextMenu;
    struct FloatRect { struct FloatPoint { float m_x; float m_y; } m_location; struct FloatSize { float m_width; float m_height; } m_size; } _mediaControlsContextMenuTargetFrame;
    struct CompletionHandler<void (unsigned long long)> { struct Function<void (unsigned long long)> { struct unique_ptr<WTF::Detail::CallableWrapperBase<void, unsigned long long>, std::default_delete<WTF::Detail::CallableWrapperBase<void, unsigned long long>>> { struct __compressed_pair<WTF::Detail::CallableWrapperBase<void, unsigned long long> *, std::default_delete<WTF::Detail::CallableWrapperBase<void, unsigned long long>>> { void *__value_; } __ptr_; } m_callableWrapper; } m_function; } _mediaControlsContextMenuCallback;
    struct WeakObjCPtr<UIView> { id m_weakReference; } _view;
    BOOL _isPresentingDDUserInterface;
    BOOL _hasPendingActionSheet;
}

@property (weak, nonatomic) id<WKActionSheetAssistantDelegate> delegate;
@property (nonatomic) BOOL needsLinkIndicator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)contextMenuInteraction:(id)a0 willDisplayMenuForConfiguration:(id)a1 animator:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })presentationRectForElementUsingClosestIndicatedRect;
- (BOOL)hasContextMenuInteraction;
- (id)initWithView:(id)a0;
- (struct RetainPtr<NSArray<_WKElementAction *>> { void *x0; })defaultActionsForImageSheet:(id)a0;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_presentationRectForSheetGivenPoint:(struct CGPoint { double x0; double x1; })a0 inHostView:(id)a1;
- (void)showMediaControlsContextMenu:(struct FloatRect { struct FloatPoint { float x0; float x1; } x0; struct FloatSize { float x0; float x1; } x1; } *)a0 items:(void *)a1 completionHandler:(void *)a2;
- (BOOL)_appendAppLinkOpenActionsForURL:(id)a0 actions:(id)a1 elementInfo:(id)a2;
- (BOOL)synchronouslyRetrievePositionInformation;
- (id)_contextMenuInteraction:(id)a0 overrideSuggestedActionsForConfiguration:(id)a1;
- (void)showLinkSheet;
- (BOOL)presentSheet;
- (void)updatePositionInformation;
- (id)hostViewForSheet;
- (BOOL)isShowingSheet;
- (id)_contextMenuInteraction:(id)a0 styleForMenuWithConfiguration:(id)a1;
- (id)suggestedActionsForContextMenuWithPositionInformation:(const void *)a0;
- (void)cleanupSheet;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })initialPresentationRectInHostViewForSheet;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)contextMenuInteraction:(id)a0 willEndForConfiguration:(id)a1 animator:(id)a2;
- (void)showDataDetectorsUIForPositionInformation:(const void *)a0;
- (void)showImageSheet;
- (id)_contentsOfContextMenuItem:(id)a0;
- (void)_createSheetWithElementActions:(id)a0 defaultTitle:(id)a1 showLinkTitle:(BOOL)a2;
- (void)updateSheetPosition;
- (id)_elementActionForDDAction:(id)a0;
- (struct optional<WebKit::InteractionInformationAtPosition> { union { char x0; struct InteractionInformationAtPosition { struct InteractionInformationRequest { struct IntPoint { int x0; int x1; } x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; } x0; BOOL x1; struct optional<bool> { union { char x0; BOOL x1; } x0; BOOL x1; } x2; unsigned char x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; BOOL x12; BOOL x13; BOOL x14; unsigned long long x15; BOOL x16; BOOL x17; BOOL x18; BOOL x19; BOOL x20; BOOL x21; struct FloatPoint { float x0; float x1; } x22; struct URL { struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *x0; } x0; } x0; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 3; unsigned int x5 : 26; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; } x23; struct URL { struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *x0; } x0; } x0; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 3; unsigned int x5 : 26; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; } x24; struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *x0; } x0; } x25; struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *x0; } x0; } x26; struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *x0; } x0; } x27; struct IntRect { struct IntPoint { int x0; int x1; } x0; struct IntSize { int x0; int x1; } x1; } x28; struct RefPtr<WebKit::ShareableBitmap, WTF::RawPtrTraits<WebKit::ShareableBitmap>, WTF::DefaultRefDerefTraits<WebKit::ShareableBitmap>> { struct ShareableBitmap *x0; } x29; struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *x0; } x0; } x30; struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *x0; } x0; } x31; float x32; struct FloatRect { struct FloatPoint { float x0; float x1; } x0; struct FloatSize { float x0; float x1; } x1; } x33; struct optional<WebCore::Cursor> { union { char x0; struct Cursor { int x0; struct RefPtr<WebCore::Image, WTF::RawPtrTraits<WebCore::Image>, WTF::DefaultRefDerefTraits<WebCore::Image>> { struct Image *x0; } x1; struct IntPoint { int x0; int x1; } x2; void *x3; } x1; } x0; BOOL x1; } x34; struct TextIndicatorData { struct FloatRect { struct FloatPoint { float x0; float x1; } x0; struct FloatSize { float x0; float x1; } x1; } x0; struct FloatRect { struct FloatPoint { float x0; float x1; } x0; struct FloatSize { float x0; float x1; } x1; } x1; struct FloatRect { struct FloatPoint { float x0; float x1; } x0; struct FloatSize { float x0; float x1; } x1; } x2; struct Vector<WebCore::FloatRect, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { struct FloatRect *x0; unsigned int x1; unsigned int x2; } x3; float x4; struct RefPtr<WebCore::Image, WTF::RawPtrTraits<WebCore::Image>, WTF::DefaultRefDerefTraits<WebCore::Image>> { struct Image *x0; } x5; struct RefPtr<WebCore::Image, WTF::RawPtrTraits<WebCore::Image>, WTF::DefaultRefDerefTraits<WebCore::Image>> { struct Image *x0; } x6; struct RefPtr<WebCore::Image, WTF::RawPtrTraits<WebCore::Image>, WTF::DefaultRefDerefTraits<WebCore::Image>> { struct Image *x0; } x7; struct Color { unsigned long long x0; } x8; unsigned char x9; struct OptionSet<WebCore::TextIndicatorOption> { unsigned short x0; } x10; } x35; struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *x0; } x0; } x36; struct RetainPtr<NSArray> { void *x0; } x37; struct IntRect { struct IntPoint { int x0; int x1; } x0; struct IntSize { int x0; int x1; } x1; } x38; struct optional<WebCore::ElementContext> { union { char x0; struct ElementContext { struct FloatRect { struct FloatPoint { float x0; float x1; } x0; struct FloatSize { float x0; float x1; } x1; } x0; struct ObjectIdentifier<WebCore::PageIdentifierType> { unsigned long long x0; } x1; struct ProcessQualified<WTF::UUID> { struct UUID { unsigned __int128 x0; } x0; struct ObjectIdentifier<WebCore::ProcessIdentifierType> { unsigned long long x0; } x1; } x2; struct ObjectIdentifier<WebCore::ElementIdentifierType> { unsigned long long x0; } x3; } x1; } x0; BOOL x1; } x39; struct optional<WebCore::ElementContext> { union { char x0; struct ElementContext { struct FloatRect { struct FloatPoint { float x0; float x1; } x0; struct FloatSize { float x0; float x1; } x1; } x0; struct ObjectIdentifier<WebCore::PageIdentifierType> { unsigned long long x0; } x1; struct ProcessQualified<WTF::UUID> { struct UUID { unsigned __int128 x0; } x0; struct ObjectIdentifier<WebCore::ProcessIdentifierType> { unsigned long long x0; } x1; } x2; struct ObjectIdentifier<WebCore::ElementIdentifierType> { unsigned long long x0; } x3; } x1; } x0; BOOL x1; } x40; } x1; } x0; BOOL x1; })currentPositionInformation;
- (void)_appendOpenActionsForURL:(id)a0 actions:(id)a1 elementInfo:(id)a2;
- (struct RetainPtr<NSArray<_WKElementAction *>> { void *x0; })defaultActionsForLinkSheet:(id)a0;
- (void)_removeMediaControlsContextMenuInteraction;
- (void)dealloc;
- (void)handleElementActionWithType:(long long)a0 element:(id)a1 needsInteraction:(BOOL)a2;
- (id)_ensureMediaControlsContextMenuInteraction;
- (void)interactionDidStartWithPositionInformation:(const void *)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })presentationRectForIndicatedElement;
- (long long)_presentationStyleForPositionInfo:(const void *)a0 elementInfo:(id)a1;
- (id)currentlyAvailableMediaControlsContextMenuItems;
- (id)_ensureDataDetectorContextMenuInteraction;
- (id)_uiMenuElementsForMediaControlContextMenuItems:(void *)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })presentationRectInHostViewForSheet;
- (id)currentlyAvailableActionTitles;
- (id)contextMenuInteraction:(id)a0 configuration:(id)a1 highlightPreviewForItemWithIdentifier:(id)a2;
- (void)_removeDataDetectorContextMenuInteraction;
- (id)superviewForSheet;

@end