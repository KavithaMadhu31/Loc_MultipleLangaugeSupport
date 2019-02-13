//
//  Use this file to import your target's public headers that you would like to expose to Swift.
//

#import "LocalizeHelper.h"
#import "ViewController.h"
#define LocalizedString(key) [[LocalizeHelper sharedLocalSystem] localizedStringForKey:(key)]

// "language" can be (for american english): "en", "en-US", "english". Analogous for other languages.
#define LocalizationSetLanguage(language) [[LocalizeHelper sharedLocalSystem] setLanguage:(language)]
