Pod::Spec.new do |spec|
  spec.name         = "QCiVoiceSDKTest"
  spec.version      = "1.0.7"
  spec.summary      = "QCiVoiceSDK for iOS."
  spec.description  = <<-DESC
   QCiVoiceSDK.
                   DESC
  spec.homepage     = "https://github.com/ZWBNice/QCiVoiceSDKTest"
  spec.license               = { :type => 'Copyright', :text => "Coripze copyright" }
  spec.author             = { "zhangwenbo" => "zhangwenbo@corpize.com" }
  spec.platform     = :ios, "10.0"
  spec.ios.deployment_target = "10.0"
  spec.source = { :git => "https://github.com/ZWBNice/QCiVoiceSDKTest.git",:tag =>"v#{spec.version}"}
  #spec.source_files  = "Classes", "Classes/**/*.{h,m}"
  #spec.exclude_files = "Classes/Exclude"
  # spec.public_header_files = "Classes/**/*.h"
  spec.resources          = "QCiVoiceSDKFramework/QCiVoiceSDK.bundle"
  spec.frameworks = "Foundation", "UIKit"
  spec.vendored_frameworks = "QCiVoiceSDKFramework/**/*.{framework}"
  spec.requires_arc = true
  # spec.xcconfig = { "HEADER_SEARCH_PATHS" => "$(SDKROOT)/usr/include/libxml2" }
  spec.pod_target_xcconfig = {
        'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64'
    }
  spec.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }

end
