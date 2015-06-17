#
# Be sure to run `pod lib lint MyLib.podspec' to ensure this is a
# valid spec and remove all comments before submitting the spec.
#
# Any lines starting with a # are optional, but encouraged
#
# To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = "AGDefines"
  s.version          = "0.1.0"
  s.summary          = "Useful objective-c defines."
  s.description      = <<-DESC
Useful objective-c defines.

For example, VBLog is a NSLog redefine. It adds some additional info (caller class, line) to log message. Stops logging in non-DEBUG builds.
AGLS shortens string localization code.
AGLS... macroses shorten string localization code.
AGFont... provide fast font creation.
AGShowAlert... show uialerts using params.
                       DESC
  s.homepage         = "https://github.com/AllgoritmLLC"
  # s.screenshots     = "www.example.com/screenshots_1", "www.example.com/screenshots_2"
  s.license          = 'MIT'
  s.author           = { "Allgoritm LLC" => "info@allgoritm.com" }
s.source           = { :git => "https://github.com/AllgoritmLLC/AGDefines.git", :tag => "v#{s.version}" }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.platform     = :ios, '7.0'
  s.requires_arc = true

  s.source_files = 'AGDefines/**/*'
  # s.resource_bundles = {
  #  'MyLib' => ['Pod/Assets/*.png']
  # }

  # s.public_header_files = 'Pod/Classes/**/*.h'
  # s.frameworks = 'UIKit', 'MapKit'
  s.dependency 'VBDefines', '~> 0.1'
end
